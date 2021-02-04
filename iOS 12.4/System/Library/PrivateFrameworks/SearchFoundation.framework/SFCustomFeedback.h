/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSDictionary, NSData;

@interface SFCustomFeedback : SFFeedback {

	unsigned long long _feedbackType;
	NSDictionary* _jsonFeedback;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long feedbackType;              //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,copy) NSDictionary * jsonFeedback;                    //@synthesize jsonFeedback=_jsonFeedback - In the implementation block
@property (nonatomic,copy) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)feedbackType;
-(void)setFeedbackType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2 ;
-(void)setJsonFeedback:(NSDictionary *)arg1 ;
-(NSDictionary *)jsonFeedback;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
