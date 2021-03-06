/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying> {

	NSString* _resourceID;
	long long _refreshRate;

}

@property (nonatomic,copy,readonly) NSString * resourceID;              //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) long long refreshRate;                   //@synthesize refreshRate=_refreshRate - In the implementation block
-(id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2 ;
-(NSString *)resourceID;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)refreshRate;
@end

