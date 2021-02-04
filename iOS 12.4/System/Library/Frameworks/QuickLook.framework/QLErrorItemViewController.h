/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class NSError, QLItem;

@interface QLErrorItemViewController : QLItemViewController {

	NSError* _error;
	QLItem* _previewItem;

}

@property (retain) QLItem * previewItem;                   //@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(QLItem *)previewItem;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)_updateLabelsWithCurrentErrorIfNeeded;
-(BOOL)canSwipeToDismiss;
-(void)loadView;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)errorView;
@end
