/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSSpecifier;

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	PSSpecifier* _specifier;

}

@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(void)reloadFromSpecifier;
-(id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(BOOL)arg2 ;
-(UILabel *)titleLabel;
@end

