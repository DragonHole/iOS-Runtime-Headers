/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HMDBulletinProvider : HMFObject <NSSecureCoding> {

	NSMutableDictionary* _bulletins;

}

@property (nonatomic,retain) NSMutableDictionary * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)bulletins;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
@end
