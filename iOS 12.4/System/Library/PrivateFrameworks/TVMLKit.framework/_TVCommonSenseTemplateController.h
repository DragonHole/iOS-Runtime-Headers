/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _TVCommonSenseView, IKViewElement;

@interface _TVCommonSenseTemplateController : UIViewController {

	_TVCommonSenseView* _commonSenseView;
	IKViewElement* _templateElement;

}

@property (nonatomic,retain) _TVCommonSenseView * commonSenseView;              //@synthesize commonSenseView=_commonSenseView - In the implementation block
@property (nonatomic,retain) IKViewElement * templateElement;                   //@synthesize templateElement=_templateElement - In the implementation block
-(IKViewElement *)templateElement;
-(void)_loadTemplate;
-(void)_updateHeaderWithElement:(id)arg1 ;
-(id)_infoTableFromElement:(id)arg1 ;
-(void)_updateFooterWithElement:(id)arg1 ;
-(_TVCommonSenseView *)commonSenseView;
-(void)updateWithCommonSenseTemplate:(id)arg1 ;
-(void)setCommonSenseView:(_TVCommonSenseView *)arg1 ;
-(void)loadView;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
@end
