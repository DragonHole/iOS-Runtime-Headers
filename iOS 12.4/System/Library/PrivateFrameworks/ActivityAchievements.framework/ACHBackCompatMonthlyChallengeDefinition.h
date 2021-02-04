/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
+(id)definitionFromData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)template;
-(NSString *)typeString;
-(NSExpression *)goalExpression;
-(unsigned long long)_monthlyChallengeTypeFromTypeString;
-(id)_dateComponentsFromIdentifier;
-(id)_goalExpressionValue;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
