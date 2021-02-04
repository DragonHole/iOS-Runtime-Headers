/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UILabel, NSTimer;

@interface AVTGroupDialCell : UICollectionViewCell {

	NSString* _string;
	UILabel* _label;
	NSTimer* _shimmerTimer;

}

@property (nonatomic,readonly) UILabel * label;                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSTimer * shimmerTimer;              //@synthesize shimmerTimer=_shimmerTimer - In the implementation block
@property (nonatomic,copy) NSString * string;                     //@synthesize string=_string - In the implementation block
+(id)labelFont;
+(id)cellIdentifier;
+(id)boldLabelFont;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg1 ;
-(void)setActiveItem:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)cancelShimmerTimer;
-(void)setShimmerTimer:(NSTimer *)arg1 ;
-(void)shimmerOnceWithCompletion:(/*^block*/id)arg1 ;
-(NSTimer *)shimmerTimer;
-(NSString *)string;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setString:(NSString *)arg1 ;
@end
