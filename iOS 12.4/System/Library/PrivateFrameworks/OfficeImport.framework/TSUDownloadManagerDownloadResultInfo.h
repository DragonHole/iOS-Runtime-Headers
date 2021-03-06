/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TSUDownloadManagerDownloadResultInfo : NSObject {

	BOOL _success;
	NSError* _error;

}

@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)init;
-(NSError *)error;
@end

