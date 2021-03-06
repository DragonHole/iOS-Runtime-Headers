/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSLock : NSObject <NSLocking> {

	void* _priv;

}

@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)lock;
-(void)unlock;
@end

