/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldRoundedRectBackgroundViewNeue.h>

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {

	BOOL _showingTouch;
	BOOL _backgroundContainer;
	long long _barStyle;
	unsigned long long _searchBarStyle;

}

@property (assign,nonatomic) long long barStyle;                             //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;              //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,nonatomic) BOOL showingTouch;                              //@synthesize showingTouch=_showingTouch - In the implementation block
@property (assign,nonatomic) BOOL backgroundContainer;                       //@synthesize backgroundContainer=_backgroundContainer - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(void)updateView;
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(void)setShowingTouch:(BOOL)arg1 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2 ;
-(BOOL)showingTouch;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(BOOL)backgroundContainer;
@end
