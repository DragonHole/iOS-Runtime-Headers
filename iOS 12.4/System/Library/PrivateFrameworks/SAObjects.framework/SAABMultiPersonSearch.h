/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic,copy) NSArray * personSearches; 
@property (nonatomic,copy) NSNumber * resultsLimit; 
+(id)multiPersonSearch;
+(id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)personSearches;
-(void)setPersonSearches:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)resultsLimit;
-(void)setResultsLimit:(NSNumber *)arg1 ;
@end

