/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKStackView.h>

@class SearchUITrailersCardSectionView, UILabel, SKUIPlayButton, SFPunchout, UIView;

@interface SearchUITrailerView : TLKStackView {

	SearchUITrailersCardSectionView* _cardSectionView;
	UILabel* _titleLabel;
	SKUIPlayButton* _playButton;
	SFPunchout* _punchout;
	UIView* _centeredBoxView;

}

@property (__weak) SearchUITrailersCardSectionView * cardSectionView;              //@synthesize cardSectionView=_cardSectionView - In the implementation block
@property (retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) SKUIPlayButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
@property (retain) SFPunchout * punchout;                                          //@synthesize punchout=_punchout - In the implementation block
@property (retain) UIView * centeredBoxView;                                       //@synthesize centeredBoxView=_centeredBoxView - In the implementation block
-(SFPunchout *)punchout;
-(void)playTrailer;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(SKUIPlayButton *)playButton;
-(id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2 ;
-(void)setCardSectionView:(SearchUITrailersCardSectionView *)arg1 ;
-(void)setCenteredBoxView:(UIView *)arg1 ;
-(SearchUITrailersCardSectionView *)cardSectionView;
-(UIView *)centeredBoxView;
-(UILabel *)titleLabel;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setPlayButton:(SKUIPlayButton *)arg1 ;
@end
