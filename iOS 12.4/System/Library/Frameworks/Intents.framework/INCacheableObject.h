/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INCacheableObject <NSObject>
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@required
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1;
-(NSString *)cacheIdentifier;

@end
