/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSFileWatcherFileHandleInfo : NSObject {

	int fileHandle;
	BOOL closed;

}

@property (readonly) BOOL isDirectory; 
+(id)openFileWithPath:(id)arg1 ;
-(BOOL)isDirectory;
-(BOOL)verifyAccessByAuditToken:(SCD_Struct_NS0)arg1 ;
-(void)dealloc;
-(id)description;
-(void)close;
@end

