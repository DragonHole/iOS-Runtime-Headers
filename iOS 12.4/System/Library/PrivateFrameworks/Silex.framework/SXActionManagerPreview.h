/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXActionPreviewActivity;
@class SXAction, UIViewController;

@interface SXActionManagerPreview : NSObject {

	SXAction* _action;
	id<SXActionPreviewActivity> _previewActivity;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) SXAction * action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id<SXActionPreviewActivity> previewActivity;              //@synthesize previewActivity=_previewActivity - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
-(id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3 ;
-(id<SXActionPreviewActivity>)previewActivity;
-(SXAction *)action;
-(UIViewController *)viewController;
@end
