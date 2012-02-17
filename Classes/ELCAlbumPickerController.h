//
//  AlbumPickerController.h
//
//  Created by Matt Tuzzolo on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@protocol ELCAlbumPickerControllerDelegate;

@interface ELCAlbumPickerController : UITableViewController {
	
	NSMutableArray *assetGroups;
	NSOperationQueue *queue;
	id parent;
    NSString *nibPath;
    ALAssetsLibrary *library;
}

@property (nonatomic, assign) id parent;
@property (nonatomic, retain) NSMutableArray *assetGroups;
@property (nonatomic, assign) id<ELCAlbumPickerControllerDelegate> delegate;

-(id)initWithNibPath:(NSString *)path;
-(void)selectedAssets:(NSArray*)_assets;

@end

@protocol ELCAlbumPickerControllerDelegate
- (void)ErrorOccurred:(NSError *)error;
@end



