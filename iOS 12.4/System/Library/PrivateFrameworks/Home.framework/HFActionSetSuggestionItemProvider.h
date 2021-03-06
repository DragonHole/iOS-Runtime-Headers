/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFActionSetSuggestionItemProvider : HFItemProvider {

	BOOL _hasProvidedStaticSuggestionItems;
	HMHome* _home;
	NSSet* _staticSuggestionItems;

}

@property (nonatomic,retain) NSSet * staticSuggestionItems;                      //@synthesize staticSuggestionItems=_staticSuggestionItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedStaticSuggestionItems;              //@synthesize hasProvidedStaticSuggestionItems=_hasProvidedStaticSuggestionItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                    //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(void)setStaticSuggestionItems:(NSSet *)arg1 ;
-(BOOL)hasProvidedStaticSuggestionItems;
-(NSSet *)staticSuggestionItems;
-(void)setHasProvidedStaticSuggestionItems:(BOOL)arg1 ;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
@end

