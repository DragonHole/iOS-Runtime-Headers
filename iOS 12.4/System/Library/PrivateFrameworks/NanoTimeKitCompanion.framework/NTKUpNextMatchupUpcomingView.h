/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NTKColoringLabel, UILayoutGuide;

@interface NTKUpNextMatchupUpcomingView : UIView {

	UIImageView* _homeLogoImageView;
	UIImageView* _awayLogoImageView;
	NTKColoringLabel* _versusLabel;
	NTKColoringLabel* _descriptionLabel;
	UILayoutGuide* _homeLogoLayoutGuide;
	UILayoutGuide* _awayLogoLayoutGuide;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
-(void)configureWithMatchup:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
@end

