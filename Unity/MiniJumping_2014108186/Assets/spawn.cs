using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawn : MonoBehaviour
{
    public GameObject pf_wall;
    public float interval;  // 벽의 생성 지연시간
    // Start is called before the first frame update
    IEnumerator Start()
    {
        // IEumerator 반환형 Start함수 + yield return 
        interval = Random.Range(1.0f, 2.0f);
        while(true)
        {
            Instantiate(pf_wall, transform.position, transform.rotation);
            yield return new WaitForSeconds(interval);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
