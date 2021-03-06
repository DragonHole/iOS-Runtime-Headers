/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCategorySuggestionsManagerServerProxy;
@interface GEOCategorySuggestionsManager : NSObject {

	id<GEOCategorySuggestionsManagerServerProxy> _serverProxy;

}
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(id)sharedManager;
-(void)fetchSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3 ;
-(id)_spotlightCategorySuggestionsForResponse:(id)arg1 ;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)init;
@end

