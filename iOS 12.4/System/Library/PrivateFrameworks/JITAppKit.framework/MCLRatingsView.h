/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIImage;

@interface MCLRatingsView : UIView {

	double _imageaspect;
	NSLayoutConstraint* _widthConstraint;
	BOOL _actionVariant;
	double _spacing;
	double _value;
	UIImage* _emptyImage;
	UIImage* _fullImage;

}

@property (assign,nonatomic) double spacing;                    //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImage * emptyImage;              //@synthesize emptyImage=_emptyImage - In the implementation block
@property (nonatomic,retain) UIImage * fullImage;               //@synthesize fullImage=_fullImage - In the implementation block
@property (assign,nonatomic) BOOL actionVariant;                //@synthesize actionVariant=_actionVariant - In the implementation block
-(UIImage *)emptyImage;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
-(void)setEmptyImage:(UIImage *)arg1 ;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)fullImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
@end
