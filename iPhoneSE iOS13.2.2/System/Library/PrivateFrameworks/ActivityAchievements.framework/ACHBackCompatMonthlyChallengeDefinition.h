/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSExpression;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _typeString;
	NSExpression* _goalExpression;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * typeString;                      //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) NSExpression * goalExpression;              //@synthesize goalExpression=_goalExpression - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)definitionFromData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)typeString;
-(id)template;
-(NSExpression *)goalExpression;
-(unsigned long long)_monthlyChallengeTypeFromTypeString;
-(id)_dateComponentsFromIdentifier;
-(id)_goalExpressionValue;
@end

