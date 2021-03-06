/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMDisabledPreviewControllerDelegate;
@class NSMutableSet;

@interface CAMDisabledPreviewController : NSObject {

	id<CAMDisabledPreviewControllerDelegate> _delegate;
	NSMutableSet* __reasonsForDisablingPreview;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForDisablingPreview;                          //@synthesize _reasonsForDisablingPreview=__reasonsForDisablingPreview - In the implementation block
@property (assign,nonatomic,__weak) id<CAMDisabledPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPreviewDisabled,nonatomic,readonly) BOOL previewDisabled; 
-(void)addDisabledPreviewReason:(long long)arg1 ;
-(void)removeDisabledPreviewReason:(long long)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(NSMutableSet *)_reasonsForDisablingPreview;
-(BOOL)isPreviewDisabled;
-(id)init;
-(void)setDelegate:(id<CAMDisabledPreviewControllerDelegate>)arg1 ;
-(id<CAMDisabledPreviewControllerDelegate>)delegate;
@end

