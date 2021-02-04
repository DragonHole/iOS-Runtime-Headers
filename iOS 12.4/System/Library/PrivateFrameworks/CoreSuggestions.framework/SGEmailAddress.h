/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject {

	NSString* _emailAddress;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5 ;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 ;
-(BOOL)isEqualToEmailAddress:(id)arg1 ;
-(NSString *)emailAddress;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
