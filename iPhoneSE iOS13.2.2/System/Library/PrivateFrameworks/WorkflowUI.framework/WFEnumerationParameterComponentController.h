/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFEnumerationTextTokenChooserPresenter.h>

@class UISegmentedControl, WFEnumerationTextTokenChooser;

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter> {

	UISegmentedControl* _segmentedControl;
	WFEnumerationTextTokenChooser* _textTokenChooser;

}
-(void)completeEditing;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentTokenChooser:(id)arg1 ;
-(void)didUpdateComponent;
-(void)willUnmount;
-(void)didUnmount;
@end

