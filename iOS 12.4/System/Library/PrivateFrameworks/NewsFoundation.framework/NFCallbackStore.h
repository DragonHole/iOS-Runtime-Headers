/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NFCallbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
-(NSMutableDictionary *)store;
-(void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3 ;
-(id)lookupForKey:(id)arg1 name:(id)arg2 ;
-(id)init;
@end
