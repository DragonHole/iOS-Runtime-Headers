/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface NSFilesystemItemRemoveOperation : NSOperation {

	id _delegate;
	NSString* _removePath;
	NSError* _error;
	void* _state;
	BOOL _filterUnderbars;

}
+(id)filesystemItemRemoveOperationWithPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(BOOL)_filtersUnderbars;
-(void)_setFilterUnderbars:(BOOL)arg1 ;
-(void)_setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(id)initWithPath:(id)arg1 ;
-(id)error;
@end

