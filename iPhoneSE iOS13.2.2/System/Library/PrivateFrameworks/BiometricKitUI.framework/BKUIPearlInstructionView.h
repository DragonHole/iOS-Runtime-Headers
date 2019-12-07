/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UIScrollView, UILabel, NSLayoutConstraint, NSLayoutYAxisAnchor;

@interface BKUIPearlInstructionView : UIView {

	BOOL _darkMode;
	NSString* _instruction;
	NSString* _detail;
	UIScrollView* _scrollView;
	UILabel* _instructionLabel;
	UILabel* _detailLabel;
	double _labelsHorizontalMargin;
	NSLayoutConstraint* _labelsWidthConstraint;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * instructionLabel;                             //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailLabel;                                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) double labelsHorizontalMargin;                                 //@synthesize labelsHorizontalMargin=_labelsHorizontalMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelsWidthConstraint;                    //@synthesize labelsWidthConstraint=_labelsWidthConstraint - In the implementation block
@property (nonatomic,retain) NSString * instruction;                                        //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,retain) NSString * detail;                                             //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                                 //@synthesize darkMode=_darkMode - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * instructionTextTopAnchor; 
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)detail;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(BOOL)darkMode;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(UILabel *)instructionLabel;
-(NSLayoutYAxisAnchor *)instructionTextTopAnchor;
-(void)_configureConstraints;
-(void)setLabelsHorizontalMargin:(double)arg1 ;
-(void)setLabelsWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelsWidthConstraint;
-(double)labelsHorizontalMargin;
-(void)setInstructionLabel:(UILabel *)arg1 ;
@end
