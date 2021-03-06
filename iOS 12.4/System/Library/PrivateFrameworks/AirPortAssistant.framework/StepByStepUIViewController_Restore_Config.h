/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>

@class UIView, UILabel;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {

	UIView* restoreRecommendationContainerView;
	UILabel* restoreRecommendationLabel;
	UIView* dontRestoreRecommendationContainerView;
	UILabel* dontRestoreRecommendationLabel;
	BOOL dontRestore;

}

@property (nonatomic,retain) UIView * restoreRecommendationContainerView; 
@property (nonatomic,retain) UIView * dontRestoreRecommendationContainerView; 
-(void)setupInitialTableHeaderConfiguration;
-(void)setRestoreRecommendationContainerView:(UIView *)arg1 ;
-(void)setDontRestoreRecommendationContainerView:(UIView *)arg1 ;
-(UIView *)dontRestoreRecommendationContainerView;
-(UIView *)restoreRecommendationContainerView;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
@end

