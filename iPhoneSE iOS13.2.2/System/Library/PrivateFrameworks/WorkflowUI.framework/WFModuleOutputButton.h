/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class WFModuleOutputModel;

@interface WFModuleOutputButton : UIButton {

	WFModuleOutputModel* _model;

}

@property (nonatomic,retain) WFModuleOutputModel * model;              //@synthesize model=_model - In the implementation block
-(WFModuleOutputModel *)model;
-(void)setModel:(WFModuleOutputModel *)arg1 ;
-(void)tintColorDidChange;
-(void)updateImages;
@end

