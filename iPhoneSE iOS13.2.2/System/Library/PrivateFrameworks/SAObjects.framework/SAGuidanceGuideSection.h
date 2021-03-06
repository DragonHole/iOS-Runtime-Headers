/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAGuidanceGuideSection : SADomainObject

@property (nonatomic,copy) NSArray * guideUtterances; 
@property (nonatomic,copy) NSString * sectionName; 
+(id)guideSection;
+(id)guideSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)guideUtterances;
-(void)setGuideUtterances:(NSArray *)arg1 ;
-(NSString *)sectionName;
-(void)setSectionName:(NSString *)arg1 ;
@end

