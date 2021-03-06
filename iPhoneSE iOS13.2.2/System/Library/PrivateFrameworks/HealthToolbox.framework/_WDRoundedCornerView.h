/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface _WDRoundedCornerView : UIView {

	UIColor* _backgroundColor;
	double _cornerRadius;
	NSDirectionalEdgeInsets _edgeInsets;
	UIView* _contentView;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets edgeInsets; 
@property (nonatomic,readonly) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)edgeInsets;
@end

