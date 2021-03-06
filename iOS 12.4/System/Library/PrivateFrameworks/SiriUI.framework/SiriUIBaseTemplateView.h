/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <SiriUI/SiriUITemplateView.h>

@protocol SiriUITemplatedView, SiriUITemplateModel;
@class NSString;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView> {

	id<SiriUITemplatedView> _templatedSuperview;
	id<SiriUITemplateModel> _dataSource;

}

@property (assign,nonatomic,__weak) id<SiriUITemplateModel> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview;              //@synthesize templatedSuperview=_templatedSuperview - In the implementation block
-(double)desiredHeight;
-(id)initWithDataSource:(id)arg1 ;
-(void)removeFromTemplatedSuperview;
-(id<SiriUITemplatedView>)templatedSuperview;
-(void)setTemplatedSuperview:(id<SiriUITemplatedView>)arg1 ;
-(void)reloadData;
-(id<SiriUITemplateModel>)dataSource;
-(void)setDataSource:(id<SiriUITemplateModel>)arg1 ;
@end

