/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView {

	BOOL _shouldDisplayTitle;
	long long _style;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTitle;              //@synthesize shouldDisplayTitle=_shouldDisplayTitle - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)configureWithEntity:(id)arg1 ;
-(void)setShouldDisplayTitle:(BOOL)arg1 ;
-(BOOL)shouldDisplayTitle;
@end
