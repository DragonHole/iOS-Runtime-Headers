/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SAWebWebSearchResult * results; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(SAWebWebSearchResult *)results;
-(void)setResults:(SAWebWebSearchResult *)arg1 ;
@end

