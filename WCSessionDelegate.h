/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2;
-(void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
-(void)session:(id)arg1 didReceiveFile:(id)arg2;
-(void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
-(void)sessionReachabilityDidChange:(id)arg1;
-(void)sessionWatchStateDidChange:(id)arg1;

@end

