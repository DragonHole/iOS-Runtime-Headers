/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITextView, NSArray, NSLayoutConstraint, NSAttributedString, NSString;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView {

	BOOL _includeBottomSpacing;
	UITextView* _messageTextView;
	NSArray* _constraints;
	NSLayoutConstraint* _bottomSpacingConstraint;

}

@property (nonatomic,retain) UITextView * messageTextView;                              //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomSpacingConstraint;              //@synthesize bottomSpacingConstraint=_bottomSpacingConstraint - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedMessage; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) BOOL includeBottomSpacing;                                 //@synthesize includeBottomSpacing=_includeBottomSpacing - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)constraints;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)updateConstraints;
-(unsigned long long)numberOfLines;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedMessage;
-(UITextView *)messageTextView;
-(void)setIncludeBottomSpacing:(BOOL)arg1 ;
-(void)setMessageTextView:(UITextView *)arg1 ;
-(double)_bottomSpacing;
-(NSLayoutConstraint *)bottomSpacingConstraint;
-(BOOL)includeBottomSpacing;
-(void)setBottomSpacingConstraint:(NSLayoutConstraint *)arg1 ;
@end
