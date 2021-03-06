/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOTileLoaderDeprecatedCtx : NSObject {

	CFRunLoopRef _runloop;
	GEOTileKeyList* _originalList;
	GEOTileKeyList* _submittedList;
	GEOTileKeyList* _satisfiedList;
	GEOTileKeyList* _notLoaded;
	/*^block*/id _callback;
	/*^block*/id _progress;
	/*^block*/id _error;
	/*^block*/id _finished;

}

@property (nonatomic,copy) id progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id finished;              //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(id)finished;
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(id)initWithList:(id)arg1 ;
-(void)setFinished:(id)arg1 ;
-(void)success:(const GEOTileKey*)arg1 tile:(id)arg2 info:(id)arg3 ;
-(void)failure:(const GEOTileKey*)arg1 error:(id)arg2 info:(id)arg3 ;
-(void)breakCycle;
-(void)dealloc;
-(void)setProgress:(id)arg1 ;
-(void)cancel;
-(id)progress;
-(id)error;
-(void)setError:(id)arg1 ;
@end

