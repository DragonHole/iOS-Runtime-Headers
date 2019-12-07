/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKMarker.h>

@class NSURL, NSString;

@interface CRKFileBackedMarker : NSObject <CRKMarker> {

	NSURL* mFileURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL exists; 
-(id)init;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)exists;
-(BOOL)createWithError:(id*)arg1 ;
@end
