/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingTabNavigationController.h>

@interface MusicNavigationController : SKUIScrollingTabNavigationController {

	unsigned long long _searchOptions;

}

@property (assign,nonatomic) unsigned long long searchOptions;              //@synthesize searchOptions=_searchOptions - In the implementation block
+(BOOL)automaticallyInstallAccountBarButtonItem;
+(BOOL)automaticallyInstallSearchBarButtonItem;
-(void)_installBarButtonsOnViewController:(id)arg1 isRootViewController:(BOOL)arg2 ;
-(id)music_reportingFeatureName;
-(id)music_reportingRecommendationData;
-(unsigned long long)searchOptions;
-(void)setSearchOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
@end

