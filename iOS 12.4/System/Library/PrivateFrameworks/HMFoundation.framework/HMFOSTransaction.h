/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFOSTransaction : HMFObject {

	NSObject*<OS_os_transaction> _transaction;
	double _creationTime;

}

@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) double creationTime;                                   //@synthesize creationTime=_creationTime - In the implementation block
-(NSObject*<OS_os_transaction>)transaction;
-(double)creationTime;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
@end

