/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTConnection;
@class NSMutableData;

@interface ASTNetworkObject : NSObject {

	id<ASTConnection> _connection;
	NSMutableData* _receivedData;

}

@property (nonatomic,retain) id<ASTConnection> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(id<ASTConnection>)connection;
-(void)setConnection:(id<ASTConnection>)arg1 ;
@end

