/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEntry : NSObject {

	NSString* _path;
	stat _stat;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) stat stat;                         //@synthesize stat=_stat - In the implementation block
-(stat)stat;
-(id)initWithFTSEntry:(ftsent*)arg1 error:(id*)arg2 ;
-(id)errorForFTSEntry:(ftsent*)arg1 ;
-(NSString *)path;
@end

