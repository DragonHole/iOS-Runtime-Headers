/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INCodableCoding <NSObject>
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
@required
-(id)dictionaryRepresentation;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1;
-(void)updateWithDictionary:(id)arg1;
-(id)dictionaryRepresentationForLanguage:(id)arg1;

@end
