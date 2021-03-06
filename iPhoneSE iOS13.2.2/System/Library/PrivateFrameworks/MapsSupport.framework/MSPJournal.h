/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MSPJournaling;
@class NSString, NSFileHandle, NSObject, NSISO8601DateFormatter;

@interface MSPJournal : NSObject {

	NSString* _path;
	NSFileHandle* _writeHandle;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSISO8601DateFormatter* _dateFormatter;
	BOOL _analyticsEnabled;
	BOOL _loggingEnabled;
	BOOL _journalEnabled;
	NSString* _name;
	id<MSPJournaling> _delegate;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic,__weak) id<MSPJournaling> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id<MSPJournaling>)delegate;
-(void)setDelegate:(id<MSPJournaling>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)path;
-(id)filename;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)noteChangeWithState:(id)arg1 error:(id)arg2 ;
-(void)noteChangeWithState:(id)arg1 ;
-(void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2 ;
-(void)rotateLogIfNeeded;
-(id)rotatedPath;
-(void)appendToLog:(id)arg1 format:(id)arg2 ;
-(void)appendToJournal:(id)arg1 format:(id)arg2 ;
-(void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2 ;
-(void)noteChangeWithState:(id)arg1 payload:(id)arg2 ;
-(void)noteChangeWithState:(id)arg1 format:(id)arg2 ;
@end

