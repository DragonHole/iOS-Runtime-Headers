/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithAccessoryList:(id)arg1 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

