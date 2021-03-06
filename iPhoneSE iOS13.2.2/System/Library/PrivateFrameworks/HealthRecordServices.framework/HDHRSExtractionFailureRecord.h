/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding> {

	long long _failureCode;
	NSString* _propertyName;
	NSString* _resourceKeyPath;

}

@property (nonatomic,readonly) long long failureCode;                                       //@synthesize failureCode=_failureCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyName;                                //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceKeyPath;                             //@synthesize resourceKeyPath=_resourceKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalDisplaySafeDescription; 
+(BOOL)supportsSecureCoding;
+(id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
-(NSString *)internalDisplaySafeDescription;
-(long long)failureCode;
-(NSString *)resourceKeyPath;
@end

