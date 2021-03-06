/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentInteraction.h>

@protocol SXWebContentInteraction <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@required
-(unsigned long long)type;
-(void)perform;

@end


@class NSString;

@interface SXWebContentInteraction : NSObject <SXWebContentInteraction> {

	unsigned long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)perform;
@end

