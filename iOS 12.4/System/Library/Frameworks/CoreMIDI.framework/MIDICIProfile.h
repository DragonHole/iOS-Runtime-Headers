/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding> {

	NSString* name;
	NSData* profileID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * profileID; 
+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithData:(id)arg1 name:(id)arg2 ;
-(NSData *)profileID;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(const void*)rawData;
@end

