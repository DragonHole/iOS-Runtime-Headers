/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView {

	PSCapacityBarData* _barData;
	UIColor* _barBackgroundColor;
	UIColor* _barSeparatorColor;
	UIColor* _barOtherDataColor;

}

@property (nonatomic,retain) PSCapacityBarData * barData;               //@synthesize barData=_barData - In the implementation block
@property (nonatomic,retain) UIColor * barBackgroundColor;              //@synthesize barBackgroundColor=_barBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barSeparatorColor;               //@synthesize barSeparatorColor=_barSeparatorColor - In the implementation block
@property (nonatomic,retain) UIColor * barOtherDataColor;               //@synthesize barOtherDataColor=_barOtherDataColor - In the implementation block
-(PSCapacityBarData *)barData;
-(void)setBarBackgroundColor:(UIColor *)arg1 ;
-(void)setBarOtherDataColor:(UIColor *)arg1 ;
-(void)setBarSeparatorColor:(UIColor *)arg1 ;
-(void)setBarData:(PSCapacityBarData *)arg1 ;
-(UIColor *)barBackgroundColor;
-(UIColor *)barSeparatorColor;
-(UIColor *)barOtherDataColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

