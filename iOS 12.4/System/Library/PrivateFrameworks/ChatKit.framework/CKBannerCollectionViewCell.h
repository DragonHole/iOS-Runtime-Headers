/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKBannerCollectionViewCell : UICollectionViewCell {

	UIImageView* _bannerView;

}

@property (nonatomic,retain) UIImageView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
+(id)reuseIdentifier;
-(void)setBannerView:(UIImageView *)arg1 ;
-(UIImageView *)bannerView;
-(void)configureWithEntity:(id)arg1 ;
-(void)setBannerImage:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

