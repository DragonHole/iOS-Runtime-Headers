/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	BOOL _controllerWasDismissed;
	BOOL _suppressRefetchingCurrentHighQualityImage;
	NSArray* _previewItems;

}

@property (assign,nonatomic) BOOL controllerWasDismissed;                                 //@synthesize controllerWasDismissed=_controllerWasDismissed - In the implementation block
@property (assign,nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;              //@synthesize suppressRefetchingCurrentHighQualityImage=_suppressRefetchingCurrentHighQualityImage - In the implementation block
@property (nonatomic,copy) NSArray * previewItems;                                        //@synthesize previewItems=_previewItems - In the implementation block
-(void)setPreviewItems:(NSArray *)arg1 ;
-(BOOL)controllerWasDismissed;
-(void)setControllerWasDismissed:(BOOL)arg1 ;
-(NSArray *)previewItems;
-(BOOL)suppressRefetchingCurrentHighQualityImage;
-(void)setSuppressRefetchingCurrentHighQualityImage:(BOOL)arg1 ;
-(id)init;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)previewActions;
-(id)currentPreviewItem;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
@end
