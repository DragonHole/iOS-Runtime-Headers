/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;

}
-(id)initWithXPCDictionaryRepresentation:(id)arg1 ;
-(id)xpcDictionaryRepresentation;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
@end

